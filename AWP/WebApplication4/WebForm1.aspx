<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="validators.aspx.cs" Inherits="WebApplication4.validators" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
	<title></title>
</head>
<body>
	<form id="form1" runat="server">
    	<div>
    	</div>
    	<asp:Label ID="Label1" runat="server" Text="Your Name:"></asp:Label>

    	<br />
    	<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
    	<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ForeColor="Red" ErrorMessage="Name cannot be empty!" ControlToValidate="TextBox1"></asp:RequiredFieldValidator>
    	<br />
    	<br />
    	<asp:Label ID="Label2" runat="server" Text="Enter Age:"></asp:Label>

    	<br />
    	<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
    	<asp:RangeValidator ID="RangeValidator1" runat="server" ForeColor="Wheat" ErrorMessage="Enter valid age"  ControlToValidate="TextBox2" MinimumValue="15" MaximumValue="25"></asp:RangeValidator>
    	<br />
    	<br />
    	<asp:Label ID="Label3" runat="server" Text="Password:"></asp:Label>

    	<br />
    	<asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
    	<br />
    	<br />
    	<asp:Label ID="Label4" runat="server" Text="Re-eneter Password:"></asp:Label>

    	<br />
    	<asp:TextBox ID="TextBox4" runat="server"></asp:TextBox>
    	<br />
    	<asp:CompareValidator ID="CompareValidator1" runat="server" ForeColor="#336699" ErrorMessage="Password should match" ControlToValidate="TextBox4" ControlToCompare="TextBox3"></asp:CompareValidator>
    	<br />
    	<br />
    	<asp:Label ID="Label5" runat="server" Text="Email ID:"></asp:Label>

    	<br />
    	<asp:TextBox ID="TextBox5" runat="server"></asp:TextBox>
    	<asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server"  ForeColor="Aqua" ErrorMessage="Enter correct email" ControlToValidate="TextBox5" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
    	<br />
    	<br />
    	<asp:Label ID="Label6" runat="server" Text="Custom Text:"></asp:Label>

    	<br />
    	<asp:TextBox ID="TextBox6" runat="server"></asp:TextBox>
    	<asp:CustomValidator ID="CustomValidator1" runat="server" ForeColor="#6600cc" ErrorMessage="Enter properly" ControlToValidate="TextBox6" ClientValidationFunction="server validation"></asp:CustomValidator>
    	<br />
    	<br />
    	<asp:Button ID="Button1" runat="server" Text="Validate" />

    	<br />
    	<asp:ValidationSummary ID="ValidationSummary1" runat="server"  />

	</form>
</body>
</html>
