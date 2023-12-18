<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication10.WebForm1" %>

<!DOCTYPE html>
	<script runat="server">

 
</script>


	<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
	<title></title>
</head>
<body>
	<form id="form1" runat="server">
    
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
	<asp:HiddenField ID="HiddenField1" runat="server" Value="2" />
	<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
	<asp:Label ID="Label2" runat="server" text="Label"></asp:Label>
	<br />
	<br />
    
	<br />
	<br />
	<asp:Button ID="Button1" runat="server" Text="View State" OnClick="Button1_Click" />
	<br />
	<br />
	<asp:Button ID="Button2" runat="server" Text="Hidden Field" OnClick="Button2_Click" />
	<br />
	<br />
	<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
	<p>
    	&nbsp;</p>
	<p>
    	<asp:Button ID="Button3" runat="server" Text="Cookies" OnClick="Button3_Click" />
	</p>
</form>
</body>
</html>
