// JavaScript

let lifoStack = [];
let fifoQueue = [];

function addToDataStructures() {
  const inputValue = document.getElementById("inputValue").value;
  lifoStack.push(inputValue);
  fifoQueue.push(inputValue);
  document.getElementById("inputValue").value = "";
  updateStackOutput();
  updateQueueOutput();
}

function popFromStack() {
  if (lifoStack.length > 0) {
    const poppedValue = lifoStack.pop();
    document.getElementById(
      "stackOutput"
    ).innerHTML = `Popped from Stack (LIFO): ${poppedValue}<br>`;
    updateStackOutput();
  }
}

function updateStackOutput() {
  const stackOutput = document.getElementById("stackOutput");
  stackOutput.innerHTML = "Stack Elements :<br>";
  lifoStack
    .slice()
    .reverse()
    .forEach((value, index) => {
      stackOutput.innerHTML += `Index ${index}: ${value}<br>`;
    });
}

function dequeue() {
  if (fifoQueue.length > 0) {
    const dequeuedValue = fifoQueue.shift();
    document.getElementById(
      "queueOutput"
    ).innerHTML = `Dequeued from Queue (FIFO): ${dequeuedValue}<br>`;
    updateQueueOutput();
  }
}

function updateQueueOutput() {
  const queueOutput = document.getElementById("queueOutput");
  queueOutput.innerHTML = "Queue elements :<br>";
  fifoQueue.forEach((value, index) => {
    queueOutput.innerHTML += `Index ${index}: ${value}<br>`;
  });
}
