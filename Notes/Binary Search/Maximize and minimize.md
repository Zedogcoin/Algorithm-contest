long long left = ...;
long long right = ...;

while (left < right) {

    long long mid = left + (right - left) / 2;

    if (feasible(mid)) {

        right = mid;

    } else {

        left = mid + 1;

    }
}

return left;



long long left = ...;
long long right = ...;

while (left < right) {

    long long mid =
        left + (right - left + 1) / 2;

    if (feasible(mid)) {

        left = mid;

    } else {

        right = mid - 1;

    }
}

return left;