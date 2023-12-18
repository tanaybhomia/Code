using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication10
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (IsPostBack)
            {
                if (ViewState["count"] != null)
                {
                    int ViewstateVal = Convert.ToInt32(ViewState["count"]) + 1;
                    Label2.Text = "View State: " + ViewstateVal.ToString();
                    ViewState["count"] = ViewstateVal.ToString();
                }
                else
                {
                    ViewState["count"] = "1";
                }
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Label1.Text = ViewState["count"].ToString();
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            if (HiddenField1.Value != null)
            {
                int val = Convert.ToInt32(HiddenField1.Value) + 1;
                HiddenField1.Value = val.ToString();
            }
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            HttpCookie h = new HttpCookie("name");
            h.Value = TextBox1.Text;
            Response.Cookies.Add(h);
            Response.Redirect("Webform2.aspx");
        }
    }
}
