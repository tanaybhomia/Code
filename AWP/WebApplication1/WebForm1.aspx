<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication1.WebForm1" %>
 <!DOCTYPE html>
 <html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
        	<title></title>
</head>
<body>
        	<form id="form1" runat="server">
	    	Username:&nbsp;
	    	<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
	    	<br />
	    	password:&nbsp; <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
	    	<br />
	    	<br />
	    	Gender &nbsp;
	    	<asp:RadioButton ID="RadioButton1" runat="server"  Text="male" />
	    	&nbsp;&nbsp;
	    	<asp:RadioButton ID="RadioButton2" runat="server" Text="female" />
	    	<br />
	    	<br />
	    	<asp:Label ID="Label1" runat="server" Text="Upload photograph"></asp:Label>
	    	<br />
	    	<br />
	    	<asp:FileUpload ID="FileUpload1" runat="server" />
	    	<br />
	    	<br />
	    	Stream:<br />
	    	<br />
	    	&nbsp;&nbsp;<asp:ListBox ID="ListBox1" runat="server" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged">
    		<asp:ListItem>BSC IT</asp:ListItem>
    		<asp:ListItem>B.Com</asp:ListItem>
    		<asp:ListItem>BA</asp:ListItem>
    		<asp:ListItem>BAF</asp:ListItem>
    		<asp:ListItem>BMS</asp:ListItem>
    		<asp:listItem>BBI</asp:listItem>
     	   <asp:ListItem>BFM</asp:ListItem>
            	    	</asp:ListBox>
	    	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
	    	<asp:Button ID="Button3" runat="server" Text="Show" OnClick="Button3_Click" />
	    	&nbsp;
	    	<asp:Label ID="Label2" runat="server" Text=""></asp:Label>
	    	<br />
	    	<br />
	    	Extra Curriculum:
	    	<asp:CheckBox ID="CheckBox1" runat="server" text="NSS"/>
	    	&nbsp;&nbsp;
	    	<asp:CheckBox ID="CheckBox2" runat="server" Text="DLLE" />
	    	&nbsp;
	    	<asp:CheckBox ID="CheckBox3" runat="server" text="Cultural"/>
	    	<br />
	    	<p>
    		<asp:Button ID="Button1" runat="server" Text="Submit" />
	        	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    		<asp:Button ID="Button2" runat="server" Text="Reset" />
	    	</p>
        	</form>
</body>
</html>
