! Module 1 contains global variables
module mod1
    real (kind=4) :: tanarray(13), radarray(13)
end module mod1

program arrayintegral
    use mod1

! Declaring variables and parameters
    integer :: i, N
    real (kind=4) :: degarray(13), calc

! Loop to create array values
    i = 0    
    do while (i < 13)
        degarray(i+1) = i*5
        call degtorad(degarray(i+1),radarray(i+1))
        tanarray(i+1) = tan(radarray(i+1))
        i = i+1
    end do

! Calling integration function
    N = 12
    call tanintegral(N, calc)
    write(*,*) 'The calculated area is: ',calc
end program arrayintegral

! Subroutine to convert degrees to radians
subroutine degtorad(arg,arg2)
    real (kind=4), intent(in) :: arg
    real (kind=4), intent(out) :: arg2
    real (kind=4) :: pi=3.1415927
    arg2=(pi*arg)/180
end subroutine degtorad

! Subroutine to calculate area based on # of points
subroutine tanintegral(arg, arg2)
    use mod1
    integer :: i
    integer, intent(in) :: arg
    real (kind=4), intent(out) :: arg2
    
! Loop to add heights of trapezoids
    i = 1
    arg2 = 0.0
    do while (i < arg+1)
        arg2 = arg2 + tanarray(i) + tanarray(i+1)
        i = i+1
    end do

! Area correction to value
    arg2 = arg2 * ( (radarray(arg+1) - radarray(1) ) / (2*arg) )
end subroutine tanintegral
