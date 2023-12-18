using System.Data;
using System.Data.SqlClient;
using System.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication11
{

    public partial class WebForm1 : System.Web.UI.Page
    {
        SqlConnection cn = new SqlConnection("Data Source=sjchslab2-241;Initial Catalog=student_detail;User ID=sa;Password=sa;Pooling=False");
        SqlCommand co = new SqlCommand();
        SqlDataReader ds;

        protected void Page_Load(object sender, EventArgs e)
        {
            cn.Open();
            co.Connection = cn;
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            co.CommandText = "Select* from student where student_name='" + TextBox1.Text + "';";
            ds = co.ExecuteReader();
            while (ds.Read())
            {
                TextBox2.Text += ds[0].ToString() + "\t" + ds[1].ToString() + "\t" + ds[2].ToString() + "\n";

            }
        }
    }
}
