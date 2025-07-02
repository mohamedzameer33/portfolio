

const mainContainer = document.getElementById('main');
const container = document.getElementById('container');

container.addEventListener('scroll', () => {
  mainContainer.style.top = `${container.scrollTop}px`;
});

  document.getElementById("myLabel").addEventListener("click", function() {
   
    console.log("Label clicked!");
  });

  function sendWhatsAppMessage() {
    // Get the form input values
    const name = document.getElementById('name').value.trim();
    const email = document.getElementById('email').value.trim();
    const message = document.getElementById('message').value.trim();

    // Check if all fields are filled
    if (name === '' || email === '' || message === '') {
        alert('Please fill in all fields before submitting.');
        return;
    }

    // Format the message
    const formattedMessage = `Name: ${name}%0A` +
        `Email: ${email}%0A` +
        `Message: ${message}`;

    // Your WhatsApp number
    const whatsappNumber = '+917010775964';

    // Create the WhatsApp URL
    const whatsappURL = `https://api.whatsapp.com/send?phone=${whatsappNumber}&text=${formattedMessage}`;

    // Open WhatsApp with the pre-filled message
    window.open(whatsappURL, '_blank');
  }
