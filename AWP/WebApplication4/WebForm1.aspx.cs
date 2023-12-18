using System;

namespace WebApplication4
{
    public partial class validators : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            // You can perform additional backend logic here if needed
            // This is just a placeholder for demonstration purposes
            Response.Write("Validation Successful!");

            // You can add more logic here based on your requirements
        }

        // Optional: If you want to perform server-side validation using CustomValidator
        protected void CustomValidator1_ServerValidate(object source, System.Web.UI.WebControls.ServerValidateEventArgs args)
        {
            // Example custom validation logic
            args.IsValid = (args.Value.Length >= 6); // Custom validation: Text should be at least 6 characters long
        }
    }
}
