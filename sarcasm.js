function convertChar(c) {
    if (/[a-zA-Z]/.test(c)) {
        return Math.random() < 0.5 ? c.toUpperCase() : c.toLowerCase();
    }
    return c;
}

function convertString(input) {
    let output = '';
    for (let i = 0; i < input.length; i++) {
        output += convertChar(input[i]);
    }
    return output;
}

const input = prompt("Enter a string:");
const convertedOutput = convertString(input);
console.log("Converted output:", convertedOutput);
