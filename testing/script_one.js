const resizeText = () => {
  const containerWidth = container.offsetWidth;
  const textWidth = text.offsetWidth;

  if (textWidth > containerWidth) {
    let fontSize = parseInt(window.getComputedStyle(text).fontSize);

    while (text.offsetWidth > containerWidth) {
      fontSize -= 1;
      text.style.fontSize = fontSize + "px";
    }
  }
};
