namespace _1_9_StudentTeacherLogin_WinForms
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            label2 = new Label();
            txtname = new TextBox();
            txtpwd = new TextBox();
            rdostudent = new RadioButton();
            rdotecher = new RadioButton();
            button1 = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("华文新魏", 10.7999992F, FontStyle.Regular, GraphicsUnit.Point);
            label1.Location = new Point(144, 77);
            label1.Name = "label1";
            label1.Size = new Size(80, 18);
            label1.TabIndex = 0;
            label1.Text = "你的名字";
            label1.Click += label1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("华文新魏", 10.7999992F, FontStyle.Regular, GraphicsUnit.Point);
            label2.Location = new Point(144, 156);
            label2.Name = "label2";
            label2.Size = new Size(80, 18);
            label2.TabIndex = 1;
            label2.Text = "你的生日";
            label2.Click += label2_Click;
            // 
            // txtname
            // 
            txtname.Location = new Point(258, 77);
            txtname.Name = "txtname";
            txtname.Size = new Size(298, 27);
            txtname.TabIndex = 2;
            // 
            // txtpwd
            // 
            txtpwd.Location = new Point(258, 156);
            txtpwd.Name = "txtpwd";
            txtpwd.PasswordChar = '*';
            txtpwd.Size = new Size(298, 27);
            txtpwd.TabIndex = 3;
            // 
            // rdostudent
            // 
            rdostudent.AutoSize = true;
            rdostudent.Font = new Font("华文新魏", 13.8F, FontStyle.Regular, GraphicsUnit.Point);
            rdostudent.Location = new Point(230, 236);
            rdostudent.Name = "rdostudent";
            rdostudent.Size = new Size(100, 27);
            rdostudent.TabIndex = 4;
            rdostudent.TabStop = true;
            rdostudent.Text = "女朋友";
            rdostudent.UseVisualStyleBackColor = true;
            rdostudent.CheckedChanged += rdostudent_CheckedChanged;
            // 
            // rdotecher
            // 
            rdotecher.AutoSize = true;
            rdotecher.Font = new Font("华文新魏", 13.8F, FontStyle.Regular, GraphicsUnit.Point);
            rdotecher.Location = new Point(433, 236);
            rdotecher.Name = "rdotecher";
            rdotecher.Size = new Size(123, 27);
            rdotecher.TabIndex = 5;
            rdotecher.TabStop = true;
            rdotecher.Text = "普通朋友";
            rdotecher.UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            button1.Font = new Font("华文新魏", 12F, FontStyle.Regular, GraphicsUnit.Point);
            button1.Location = new Point(318, 314);
            button1.Name = "button1";
            button1.Size = new Size(94, 29);
            button1.TabIndex = 6;
            button1.Text = "登   录";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(9F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(button1);
            Controls.Add(rdotecher);
            Controls.Add(rdostudent);
            Controls.Add(txtpwd);
            Controls.Add(txtname);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private TextBox txtname;
        private TextBox txtpwd;
        private RadioButton rdostudent;
        private RadioButton rdotecher;
        private Button button1;
    }
}