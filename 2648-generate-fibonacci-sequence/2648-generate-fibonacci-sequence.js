/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let a = 0, b = 1;
    
    while (true) {  // Infinite loop to generate Fibonacci sequence lazily
        yield a;
        [a, b] = [b, a + b]; // Update a and b
    }
};

/**
 * Example Usage:
 * const gen = fibGenerator();
 * console.log(gen.next().value); // 0
 * console.log(gen.next().value); // 1
 * console.log(gen.next().value); // 1
 * console.log(gen.next().value); // 2
 * console.log(gen.next().value); // 3
 */
