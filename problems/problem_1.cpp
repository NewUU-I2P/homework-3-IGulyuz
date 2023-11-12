void problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    const float fixedAmount = 13;
    const float rate1 = 0.4;
    const float rate2 = 0.12;
    const float rate3 = 1.4;
    const float additionalRate = 1.5;

    if (consumed_water <= 30) {
        cost = fixedAmount + consumed_water * rate1;
    } else if (consumed_water <= 50) {
        cost = fixedAmount + 30 * rate1 + (consumed_water - 30) * rate2;
    } else if (consumed_water <= 60) {
        cost = fixedAmount + 30 * rate1 + 20 * rate2 + (consumed_water - 50) * rate3;
    } else {
        cost = fixedAmount + 30 * rate1 + 20 * rate2 + 10 * rate3 + (consumed_water - 60) * additionalRate;
    }

    return cost;
}
