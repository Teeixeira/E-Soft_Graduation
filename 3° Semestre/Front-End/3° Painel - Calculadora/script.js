let currentInput = "";
let previousInput = "";
let operator = null;

function addNum(value) {
  if (value === "." && currentInput.includes(".")) return;
  currentInput += value;
  updateDisplay(currentInput);
}

function operation(op) {
  if (op === "=") {
    calculateResult();
    return;
  }

  if (op === "AC") {
    clearDisplay();
    return;
  }

  if (currentInput === "" && previousInput === "") return;

  if (previousInput && currentInput) {
    calculateResult();
  }

  operator = op;
  previousInput = currentInput;
  currentInput = "";
}

function calculateResult() {
  if (!previousInput || !currentInput || !operator) return;

  let result = 0;
  const num1 = parseFloat(previousInput);
  const num2 = parseFloat(currentInput);

  switch (operator) {
    case "+":
      result = num1 + num2;
      break;
    case "-":
      result = num1 - num2;
      break;
    case "*":
      result = num1 * num2;
      break;
    case "/":
      result = num2 !== 0 ? num1 / num2 : "Erro";
      break;
  }

  currentInput = result.toString();
  previousInput = "";
  operator = null;
  updateDisplay(currentInput);
}

function clearDisplay() {
  currentInput = "";
  previousInput = "";
  operator = null;
  updateDisplay("0");
}

function updateDisplay(value) {
  document.getElementById("display").value = value;
}
