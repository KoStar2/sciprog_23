program fibonacci
! Declaring variables
    integer (kind = 4) :: n, i, previous, current
    integer (kind = 4) :: series(50)

! Ask user for number of digits to calculate to
    write(6,*) 'Choose a non-zero positive integer:'
    read(5,*), n

! Set inital values
    previous = 0
    current = 1
    series(1) = 0
    series(2) = 1

! Loop to update series up to n digits
    i = 3
    do while (i < n+1)
        call updateValues(previous, current)
        series(i) = current
        i = i+1
    end do

! Print series
    write(*,*) 'The series up to ', n, ' digits is:'
    i = 1
    do while (i < n+1)
        write(*, *) series(i)
        i = i+1
    end do

end program fibonacci

! Subroutine to update current and previous values
subroutine updateValues(pre,cur)
    integer (kind = 4), intent(inout) :: pre, cur
    integer (kind = 4) :: temp

    temp = pre
    pre = cur
    cur = cur + temp
end subroutine updateValues
