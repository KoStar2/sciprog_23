program integral
! Declare variables and parameters
    integer :: i, N
    real :: a,b,x,calc
    real, parameter :: pi = 3.1415927

! Setting start and end points, # of points to end
    a = 0
    b = pi / 3
    N = 12

! Adding inital and final trapezoid heights
    calc = tan(a)
    calc = calc + tan(b)

! Initalizing first end point, for loop to add heights
    x = a + ((b - a) / N)
    i = 1
    do while (i < N)
        calc = calc + (2*tan(x))
        x = x + ( (b - a) / N )
        i = i+1
    end do

! Multiplying by trapezoid widths
    calc = calc * ((b - a) / (2*N))

! Writing calculated value, analytical value for comparison
    write(6, '(a,f0.4)') ' The value calculated using the trapezoidal rule is: ',calc
    write(6, '(a,f0.4)') ' The value calculated analytically is:',log(2.)

end program integral
