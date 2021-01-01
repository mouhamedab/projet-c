/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_acceuilw (void)
{
  GtkWidget *acceuilw;
  GtkWidget *fixed1;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *image22;
  GtkWidget *button2;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label2;

  acceuilw = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (acceuilw, 1000, 800);
  gtk_window_set_title (GTK_WINDOW (acceuilw), _("acceuil troupeaux"));
  gtk_window_set_position (GTK_WINDOW (acceuilw), GTK_WIN_POS_CENTER);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (acceuilw), fixed1);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 800, 648);
  gtk_widget_set_size_request (button1, 104, 37);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("Quitter"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

  image22 = create_pixmap (acceuilw, "Shaun-Sheep.jpg");
  gtk_widget_show (image22);
  gtk_fixed_put (GTK_FIXED (fixed1), image22, 24, 128);
  gtk_widget_set_size_request (image22, 968, 504);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 392, 56);
  gtk_widget_set_size_request (button2, 208, 62);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button2), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-media-play", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic (_("Gestion  Troupeaux"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox2), label2, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_AcceuilGestionw_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (acceuilw, acceuilw, "acceuilw");
  GLADE_HOOKUP_OBJECT (acceuilw, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (acceuilw, button1, "button1");
  GLADE_HOOKUP_OBJECT (acceuilw, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (acceuilw, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (acceuilw, image1, "image1");
  GLADE_HOOKUP_OBJECT (acceuilw, label1, "label1");
  GLADE_HOOKUP_OBJECT (acceuilw, image22, "image22");
  GLADE_HOOKUP_OBJECT (acceuilw, button2, "button2");
  GLADE_HOOKUP_OBJECT (acceuilw, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (acceuilw, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (acceuilw, image2, "image2");
  GLADE_HOOKUP_OBJECT (acceuilw, label2, "label2");

  return acceuilw;
}

GtkWidget*
create_gestionw (void)
{
  GtkWidget *gestionw;
  GtkWidget *fixed2;
  GtkWidget *button8;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label33;
  GtkWidget *button7w;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label32;
  GtkWidget *notebook1w;
  GtkWidget *fixed3;
  GtkWidget *entry3w;
  GtkWidget *entry5w;
  GtkWidget *yawmia;
  GtkWidget *combobox1w;
  GtkWidget *combobox2w;
  GtkWidget *button3;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label14;
  GtkWidget *label35w;
  GtkWidget *label7w;
  GtkWidget *label8w;
  GtkWidget *label10w;
  GtkWidget *label34w;
  GtkWidget *label12w;
  GtkWidget *label6w;
  GtkWidget *label5w;
  GtkWidget *label13w;
  GtkWidget *label11w;
  GtkWidget *label4w;
  GtkWidget *label3w;
  GtkWidget *label15w;
  GtkWidget *fixed4;
  GtkWidget *entry8w;
  GtkWidget *entry9w;
  GtkWidget *button4w;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label21;
  GtkWidget *label36w;
  GtkWidget *label37w;
  GtkWidget *label19w;
  GtkWidget *label18w;
  GtkWidget *label17w;
  GtkWidget *label20w;
  GtkWidget *label16w;
  GtkWidget *image19;
  GtkWidget *combobox4w;
  GtkWidget *combobox3w;
  GtkWidget *label22w;
  GtkWidget *fixed6;
  GtkWidget *entry10w;
  GtkWidget *label27;
  GtkWidget *bmodifier;
  GtkWidget *alignment14;
  GtkWidget *hbox14;
  GtkWidget *image14;
  GtkWidget *label49;
  GtkWidget *bsupprimer;
  GtkWidget *alignment15;
  GtkWidget *hbox15;
  GtkWidget *image15;
  GtkWidget *label50;
  GtkWidget *bafficher12;
  GtkWidget *alignment16;
  GtkWidget *hbox16;
  GtkWidget *image16;
  GtkWidget *label51;
  GtkWidget *button6;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label30;
  GtkWidget *label29w;
  GtkWidget *label26w;
  GtkWidget *label28w;
  GtkWidget *image20;
  GtkWidget *scrolledwindow2;
  GtkWidget *treeview2w;
  GtkWidget *label31w;
  GtkWidget *fixed7;
  GtkWidget *validert;
  GtkWidget *alignment17;
  GtkWidget *hbox17;
  GtkWidget *image17;
  GtkWidget *label53;
  GtkWidget *labelnombre;
  GtkWidget *label54;
  GtkWidget *image21;
  GtkWidget *comboboxchoix;
  GtkWidget *label52;

  gestionw = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (gestionw, 1000, 800);
  gtk_window_set_title (GTK_WINDOW (gestionw), _("gestion Troupeaux"));
  gtk_window_set_position (GTK_WINDOW (gestionw), GTK_WIN_POS_CENTER);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (gestionw), fixed2);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_fixed_put (GTK_FIXED (fixed2), button8, 824, 8);
  gtk_widget_set_size_request (button8, 80, 48);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (button8), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label33 = gtk_label_new_with_mnemonic (_("<span foreground=\"green\"><b>Retour</b></span>"));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (hbox8), label33, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label33), TRUE);

  button7w = gtk_button_new ();
  gtk_widget_show (button7w);
  gtk_fixed_put (GTK_FIXED (fixed2), button7w, 912, 8);
  gtk_widget_set_size_request (button7w, 80, 48);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button7w), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label32 = gtk_label_new_with_mnemonic (_("<span foreground=\"red\"><b>Quitter</b></span>"));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox7), label32, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label32), TRUE);

  notebook1w = gtk_notebook_new ();
  gtk_widget_show (notebook1w);
  gtk_fixed_put (GTK_FIXED (fixed2), notebook1w, 0, 56);
  gtk_widget_set_size_request (notebook1w, 1000, 768);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook1w), fixed3);

  entry3w = gtk_entry_new ();
  gtk_widget_show (entry3w);
  gtk_fixed_put (GTK_FIXED (fixed3), entry3w, 184, 344);
  gtk_widget_set_size_request (entry3w, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3w), 8226);

  entry5w = gtk_entry_new ();
  gtk_widget_show (entry5w);
  gtk_fixed_put (GTK_FIXED (fixed3), entry5w, 184, 120);
  gtk_widget_set_size_request (entry5w, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5w), 8226);

  yawmia = gtk_calendar_new ();
  gtk_widget_show (yawmia);
  gtk_fixed_put (GTK_FIXED (fixed3), yawmia, 632, 112);
  gtk_widget_set_size_request (yawmia, 260, 184);
  gtk_calendar_display_options (GTK_CALENDAR (yawmia),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  combobox1w = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1w);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox1w, 184, 176);
  gtk_widget_set_size_request (combobox1w, 160, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1w), _("Male"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1w), _("Femelle"));

  combobox2w = gtk_combo_box_new_text ();
  gtk_widget_show (combobox2w);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox2w, 184, 232);
  gtk_widget_set_size_request (combobox2w, 160, 39);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2w), _("Veaux "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2w), _("Brebie"));

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed3), button3, 200, 432);
  gtk_widget_set_size_request (button3, 128, 56);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button3), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox3), label14, FALSE, FALSE, 0);

  label35w = gtk_label_new (_("<span foreground=\"blue\" ><b> Troupeaux ajout\303\251 avec succes !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label35w, 0, 0);
  gtk_widget_set_size_request (label35w, 264, 56);
  gtk_label_set_use_markup (GTK_LABEL (label35w), TRUE);

  label7w = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir Sexe !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label7w, 360, 168);
  gtk_widget_set_size_request (label7w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label7w), TRUE);

  label8w = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir type !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label8w, 360, 224);
  gtk_widget_set_size_request (label8w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label8w), TRUE);

  label10w = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir Prix !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label10w, 360, 328);
  gtk_widget_set_size_request (label10w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label10w), TRUE);

  label34w = gtk_label_new (_("<span foreground=\"black\" ><b> troupeaux  existant !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label34w, 184, 24);
  gtk_widget_set_size_request (label34w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label34w), TRUE);

  label12w = gtk_label_new (_("ID : "));
  gtk_widget_show (label12w);
  gtk_fixed_put (GTK_FIXED (fixed3), label12w, 88, 112);
  gtk_widget_set_size_request (label12w, 104, 48);

  label6w = gtk_label_new (_("Sexe : "));
  gtk_widget_show (label6w);
  gtk_fixed_put (GTK_FIXED (fixed3), label6w, 72, 176);
  gtk_widget_set_size_request (label6w, 104, 48);
  gtk_label_set_use_markup (GTK_LABEL (label6w), TRUE);

  label5w = gtk_label_new (_("Type : "));
  gtk_widget_show (label5w);
  gtk_fixed_put (GTK_FIXED (fixed3), label5w, 72, 224);
  gtk_widget_set_size_request (label5w, 104, 48);

  label13w = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir ID !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label13w, 400, 112);
  gtk_widget_set_size_request (label13w, 128, 40);
  gtk_label_set_use_markup (GTK_LABEL (label13w), TRUE);

  label11w = gtk_label_new (_("<span foreground=\"black\" ><b>Ajouter troupeaux :</b></span>"));
  gtk_widget_show (label11w);
  gtk_fixed_put (GTK_FIXED (fixed3), label11w, 360, 48);
  gtk_widget_set_size_request (label11w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label11w), TRUE);

  label4w = gtk_label_new (_("       Date \nde naissance: "));
  gtk_widget_show (label4w);
  gtk_fixed_put (GTK_FIXED (fixed3), label4w, 528, 112);
  gtk_widget_set_size_request (label4w, 104, 48);

  label3w = gtk_label_new (_("Prix 'Dinar' : "));
  gtk_widget_show (label3w);
  gtk_fixed_put (GTK_FIXED (fixed3), label3w, 64, 336);
  gtk_widget_set_size_request (label3w, 104, 48);

  label15w = gtk_label_new (_("<span foreground=\"green\"><b>Ajouter</b></span>"));
  gtk_widget_show (label15w);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1w), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1w), 0), label15w);
  gtk_label_set_use_markup (GTK_LABEL (label15w), TRUE);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1w), fixed4);

  entry8w = gtk_entry_new ();
  gtk_widget_show (entry8w);
  gtk_fixed_put (GTK_FIXED (fixed4), entry8w, 216, 344);
  gtk_widget_set_size_request (entry8w, 192, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8w), 8226);

  entry9w = gtk_entry_new ();
  gtk_widget_show (entry9w);
  gtk_fixed_put (GTK_FIXED (fixed4), entry9w, 216, 288);
  gtk_widget_set_size_request (entry9w, 192, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry9w), 8226);

  button4w = gtk_button_new ();
  gtk_fixed_put (GTK_FIXED (fixed4), button4w, 168, 432);
  gtk_widget_set_size_request (button4w, 128, 56);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button4w), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-index", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label21 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label21);
  gtk_box_pack_start (GTK_BOX (hbox4), label21, FALSE, FALSE, 0);

  label36w = gtk_label_new (_("<span foreground=\"black\" ><b>Modifier troupeaux de ID :</b></span>"));
  gtk_widget_show (label36w);
  gtk_fixed_put (GTK_FIXED (fixed4), label36w, 40, 40);
  gtk_widget_set_size_request (label36w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label36w), TRUE);

  label37w = gtk_label_new (_("<span foreground=\"green\" ><b>Troupeaux Modifi\303\251 avec succes </b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed4), label37w, 104, 0);
  gtk_widget_set_size_request (label37w, 296, 56);
  gtk_label_set_use_markup (GTK_LABEL (label37w), TRUE);

  label19w = gtk_label_new (_("Sexe : "));
  gtk_widget_show (label19w);
  gtk_fixed_put (GTK_FIXED (fixed4), label19w, 88, 168);
  gtk_widget_set_size_request (label19w, 104, 48);

  label18w = gtk_label_new (_("Type : "));
  gtk_widget_show (label18w);
  gtk_fixed_put (GTK_FIXED (fixed4), label18w, 88, 224);
  gtk_widget_set_size_request (label18w, 104, 48);

  label17w = gtk_label_new (_("Date de naissance : "));
  gtk_widget_show (label17w);
  gtk_fixed_put (GTK_FIXED (fixed4), label17w, 32, 280);
  gtk_widget_set_size_request (label17w, 152, 48);

  label20w = gtk_label_new ("");
  gtk_widget_show (label20w);
  gtk_fixed_put (GTK_FIXED (fixed4), label20w, 248, 48);
  gtk_widget_set_size_request (label20w, 56, 48);

  label16w = gtk_label_new (_("Prix 'Dinar': "));
  gtk_widget_show (label16w);
  gtk_fixed_put (GTK_FIXED (fixed4), label16w, 64, 336);
  gtk_widget_set_size_request (label16w, 104, 48);

  image19 = create_pixmap (gestionw, "Firefox_wallpaper.png");
  gtk_widget_show (image19);
  gtk_fixed_put (GTK_FIXED (fixed4), image19, 520, 48);
  gtk_widget_set_size_request (image19, 416, 496);

  combobox4w = gtk_combo_box_new_text ();
  gtk_widget_show (combobox4w);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox4w, 216, 224);
  gtk_widget_set_size_request (combobox4w, 192, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox4w), _("Veaux"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox4w), _("Brebie"));

  combobox3w = gtk_combo_box_new_text ();
  gtk_widget_show (combobox3w);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox3w, 216, 160);
  gtk_widget_set_size_request (combobox3w, 192, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3w), _("Male "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3w), _("Femelle"));

  label22w = gtk_label_new (_("<span foreground=\"green\"><b>Modifier</b></span>"));
  gtk_widget_show (label22w);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1w), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1w), 1), label22w);
  gtk_label_set_use_markup (GTK_LABEL (label22w), TRUE);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (notebook1w), fixed6);

  entry10w = gtk_entry_new ();
  gtk_widget_show (entry10w);
  gtk_fixed_put (GTK_FIXED (fixed6), entry10w, 688, 160);
  gtk_widget_set_size_request (entry10w, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry10w), 8226);

  label27 = gtk_label_new ("");
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed6), label27, 720, 208);
  gtk_widget_set_size_request (label27, 48, 56);

  bmodifier = gtk_button_new ();
  gtk_widget_show (bmodifier);
  gtk_fixed_put (GTK_FIXED (fixed6), bmodifier, 872, 288);
  gtk_widget_set_size_request (bmodifier, 112, 48);

  alignment14 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment14);
  gtk_container_add (GTK_CONTAINER (bmodifier), alignment14);

  hbox14 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox14);
  gtk_container_add (GTK_CONTAINER (alignment14), hbox14);

  image14 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image14);
  gtk_box_pack_start (GTK_BOX (hbox14), image14, FALSE, FALSE, 0);

  label49 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label49);
  gtk_box_pack_start (GTK_BOX (hbox14), label49, FALSE, FALSE, 0);

  bsupprimer = gtk_button_new ();
  gtk_widget_show (bsupprimer);
  gtk_fixed_put (GTK_FIXED (fixed6), bsupprimer, 872, 368);
  gtk_widget_set_size_request (bsupprimer, 112, 48);

  alignment15 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment15);
  gtk_container_add (GTK_CONTAINER (bsupprimer), alignment15);

  hbox15 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox15);
  gtk_container_add (GTK_CONTAINER (alignment15), hbox15);

  image15 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox15), image15, FALSE, FALSE, 0);

  label50 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label50);
  gtk_box_pack_start (GTK_BOX (hbox15), label50, FALSE, FALSE, 0);

  bafficher12 = gtk_button_new ();
  gtk_widget_show (bafficher12);
  gtk_fixed_put (GTK_FIXED (fixed6), bafficher12, 872, 448);
  gtk_widget_set_size_request (bafficher12, 112, 48);

  alignment16 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment16);
  gtk_container_add (GTK_CONTAINER (bafficher12), alignment16);

  hbox16 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox16);
  gtk_container_add (GTK_CONTAINER (alignment16), hbox16);

  image16 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image16);
  gtk_box_pack_start (GTK_BOX (hbox16), image16, FALSE, FALSE, 0);

  label51 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label51);
  gtk_box_pack_start (GTK_BOX (hbox16), label51, FALSE, FALSE, 0);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed6), button6, 872, 152);
  gtk_widget_set_size_request (button6, 112, 48);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button6), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label30 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label30);
  gtk_box_pack_start (GTK_BOX (hbox6), label30, FALSE, FALSE, 0);

  label29w = gtk_label_new (_("Id : "));
  gtk_widget_show (label29w);
  gtk_fixed_put (GTK_FIXED (fixed6), label29w, 592, 152);
  gtk_widget_set_size_request (label29w, 112, 48);

  label26w = gtk_label_new (_("<span foreground=\"blue\" ><b>Resultat(s) obtenu(s)</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed6), label26w, 784, 200);
  gtk_widget_set_size_request (label26w, 216, 72);
  gtk_label_set_use_markup (GTK_LABEL (label26w), TRUE);

  label28w = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir ID !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed6), label28w, 704, 64);
  gtk_widget_set_size_request (label28w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label28w), TRUE);

  image20 = create_pixmap (gestionw, "Shaun-Sheep.jpg");
  gtk_widget_show (image20);
  gtk_fixed_put (GTK_FIXED (fixed6), image20, 576, 288);
  gtk_widget_set_size_request (image20, 264, 240);
  gtk_misc_set_alignment (GTK_MISC (image20), 0.55, 0.33);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow2);
  gtk_fixed_put (GTK_FIXED (fixed6), scrolledwindow2, 8, 88);
  gtk_widget_set_size_request (scrolledwindow2, 520, 448);

  treeview2w = gtk_tree_view_new ();
  gtk_widget_show (treeview2w);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), treeview2w);
  gtk_widget_set_size_request (treeview2w, 592, 456);

  label31w = gtk_label_new (_("<span foreground=\"green\"><b>Rechercher-Afficher-Supprimer</b></span>"));
  gtk_widget_show (label31w);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1w), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1w), 2), label31w);
  gtk_label_set_use_markup (GTK_LABEL (label31w), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label31w), 0.54, 0.5);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (notebook1w), fixed7);

  validert = gtk_button_new ();
  gtk_widget_show (validert);
  gtk_fixed_put (GTK_FIXED (fixed7), validert, 24, 208);
  gtk_widget_set_size_request (validert, 122, 40);

  alignment17 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment17);
  gtk_container_add (GTK_CONTAINER (validert), alignment17);

  hbox17 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox17);
  gtk_container_add (GTK_CONTAINER (alignment17), hbox17);

  image17 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image17);
  gtk_box_pack_start (GTK_BOX (hbox17), image17, FALSE, FALSE, 0);

  label53 = gtk_label_new_with_mnemonic (_("Valider"));
  gtk_widget_show (label53);
  gtk_box_pack_start (GTK_BOX (hbox17), label53, FALSE, FALSE, 0);

  labelnombre = gtk_label_new ("");
  gtk_widget_show (labelnombre);
  gtk_fixed_put (GTK_FIXED (fixed7), labelnombre, 208, 120);
  gtk_widget_set_size_request (labelnombre, 361, 72);

  label54 = gtk_label_new_with_mnemonic (_("Choisir le type \303\240 calcule :"));
  gtk_widget_show (label54);
  gtk_fixed_put (GTK_FIXED (fixed7), label54, 8, 72);
  gtk_widget_set_size_request (label54, 312, 40);

  image21 = create_pixmap (gestionw, "Shaun-Sheep.jpg");
  gtk_widget_show (image21);
  gtk_fixed_put (GTK_FIXED (fixed7), image21, 128, 264);
  gtk_widget_set_size_request (image21, 776, 362);

  comboboxchoix = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxchoix);
  gtk_fixed_put (GTK_FIXED (fixed7), comboboxchoix, 24, 128);
  gtk_widget_set_size_request (comboboxchoix, 152, 48);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxchoix), _("Veaux"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxchoix), _("Brebie"));

  label52 = gtk_label_new_with_mnemonic (_(" <span foreground=\"purple\"><b>Calcule de nombre de troupeaux</b></span>"));
  gtk_widget_show (label52);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1w), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1w), 3), label52);
  gtk_label_set_use_markup (GTK_LABEL (label52), TRUE);

  g_signal_connect ((gpointer) button8, "clicked",
                    G_CALLBACK (on_GestionAcceuilw_clicked),
                    NULL);
  g_signal_connect ((gpointer) button7w, "clicked",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_Ajoutertroupeaux_clicked),
                    NULL);
  g_signal_connect ((gpointer) button4w, "clicked",
                    G_CALLBACK (on_Modifiertroupeaux_clicked),
                    NULL);
  g_signal_connect ((gpointer) bmodifier, "clicked",
                    G_CALLBACK (on_bmodifier_clickedw),
                    NULL);
  g_signal_connect ((gpointer) bsupprimer, "clicked",
                    G_CALLBACK (on_bsupprimer_clickedw),
                    NULL);
  g_signal_connect ((gpointer) bafficher12, "clicked",
                    G_CALLBACK (on_bafficher12w_clicked),
                    NULL);
  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_cherchertroupeaux_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview2w, "row_activated",
                    G_CALLBACK (on_treeview2w_row_activated),
                    NULL);
  g_signal_connect ((gpointer) validert, "clicked",
                    G_CALLBACK (on_validersomme_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (gestionw, gestionw, "gestionw");
  GLADE_HOOKUP_OBJECT (gestionw, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (gestionw, button8, "button8");
  GLADE_HOOKUP_OBJECT (gestionw, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (gestionw, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (gestionw, image8, "image8");
  GLADE_HOOKUP_OBJECT (gestionw, label33, "label33");
  GLADE_HOOKUP_OBJECT (gestionw, button7w, "button7w");
  GLADE_HOOKUP_OBJECT (gestionw, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (gestionw, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (gestionw, image7, "image7");
  GLADE_HOOKUP_OBJECT (gestionw, label32, "label32");
  GLADE_HOOKUP_OBJECT (gestionw, notebook1w, "notebook1w");
  GLADE_HOOKUP_OBJECT (gestionw, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (gestionw, entry3w, "entry3w");
  GLADE_HOOKUP_OBJECT (gestionw, entry5w, "entry5w");
  GLADE_HOOKUP_OBJECT (gestionw, yawmia, "yawmia");
  GLADE_HOOKUP_OBJECT (gestionw, combobox1w, "combobox1w");
  GLADE_HOOKUP_OBJECT (gestionw, combobox2w, "combobox2w");
  GLADE_HOOKUP_OBJECT (gestionw, button3, "button3");
  GLADE_HOOKUP_OBJECT (gestionw, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (gestionw, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (gestionw, image3, "image3");
  GLADE_HOOKUP_OBJECT (gestionw, label14, "label14");
  GLADE_HOOKUP_OBJECT (gestionw, label35w, "label35w");
  GLADE_HOOKUP_OBJECT (gestionw, label7w, "label7w");
  GLADE_HOOKUP_OBJECT (gestionw, label8w, "label8w");
  GLADE_HOOKUP_OBJECT (gestionw, label10w, "label10w");
  GLADE_HOOKUP_OBJECT (gestionw, label34w, "label34w");
  GLADE_HOOKUP_OBJECT (gestionw, label12w, "label12w");
  GLADE_HOOKUP_OBJECT (gestionw, label6w, "label6w");
  GLADE_HOOKUP_OBJECT (gestionw, label5w, "label5w");
  GLADE_HOOKUP_OBJECT (gestionw, label13w, "label13w");
  GLADE_HOOKUP_OBJECT (gestionw, label11w, "label11w");
  GLADE_HOOKUP_OBJECT (gestionw, label4w, "label4w");
  GLADE_HOOKUP_OBJECT (gestionw, label3w, "label3w");
  GLADE_HOOKUP_OBJECT (gestionw, label15w, "label15w");
  GLADE_HOOKUP_OBJECT (gestionw, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (gestionw, entry8w, "entry8w");
  GLADE_HOOKUP_OBJECT (gestionw, entry9w, "entry9w");
  GLADE_HOOKUP_OBJECT (gestionw, button4w, "button4w");
  GLADE_HOOKUP_OBJECT (gestionw, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (gestionw, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (gestionw, image4, "image4");
  GLADE_HOOKUP_OBJECT (gestionw, label21, "label21");
  GLADE_HOOKUP_OBJECT (gestionw, label36w, "label36w");
  GLADE_HOOKUP_OBJECT (gestionw, label37w, "label37w");
  GLADE_HOOKUP_OBJECT (gestionw, label19w, "label19w");
  GLADE_HOOKUP_OBJECT (gestionw, label18w, "label18w");
  GLADE_HOOKUP_OBJECT (gestionw, label17w, "label17w");
  GLADE_HOOKUP_OBJECT (gestionw, label20w, "label20w");
  GLADE_HOOKUP_OBJECT (gestionw, label16w, "label16w");
  GLADE_HOOKUP_OBJECT (gestionw, image19, "image19");
  GLADE_HOOKUP_OBJECT (gestionw, combobox4w, "combobox4w");
  GLADE_HOOKUP_OBJECT (gestionw, combobox3w, "combobox3w");
  GLADE_HOOKUP_OBJECT (gestionw, label22w, "label22w");
  GLADE_HOOKUP_OBJECT (gestionw, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (gestionw, entry10w, "entry10w");
  GLADE_HOOKUP_OBJECT (gestionw, label27, "label27");
  GLADE_HOOKUP_OBJECT (gestionw, bmodifier, "bmodifier");
  GLADE_HOOKUP_OBJECT (gestionw, alignment14, "alignment14");
  GLADE_HOOKUP_OBJECT (gestionw, hbox14, "hbox14");
  GLADE_HOOKUP_OBJECT (gestionw, image14, "image14");
  GLADE_HOOKUP_OBJECT (gestionw, label49, "label49");
  GLADE_HOOKUP_OBJECT (gestionw, bsupprimer, "bsupprimer");
  GLADE_HOOKUP_OBJECT (gestionw, alignment15, "alignment15");
  GLADE_HOOKUP_OBJECT (gestionw, hbox15, "hbox15");
  GLADE_HOOKUP_OBJECT (gestionw, image15, "image15");
  GLADE_HOOKUP_OBJECT (gestionw, label50, "label50");
  GLADE_HOOKUP_OBJECT (gestionw, bafficher12, "bafficher12");
  GLADE_HOOKUP_OBJECT (gestionw, alignment16, "alignment16");
  GLADE_HOOKUP_OBJECT (gestionw, hbox16, "hbox16");
  GLADE_HOOKUP_OBJECT (gestionw, image16, "image16");
  GLADE_HOOKUP_OBJECT (gestionw, label51, "label51");
  GLADE_HOOKUP_OBJECT (gestionw, button6, "button6");
  GLADE_HOOKUP_OBJECT (gestionw, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (gestionw, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (gestionw, image6, "image6");
  GLADE_HOOKUP_OBJECT (gestionw, label30, "label30");
  GLADE_HOOKUP_OBJECT (gestionw, label29w, "label29w");
  GLADE_HOOKUP_OBJECT (gestionw, label26w, "label26w");
  GLADE_HOOKUP_OBJECT (gestionw, label28w, "label28w");
  GLADE_HOOKUP_OBJECT (gestionw, image20, "image20");
  GLADE_HOOKUP_OBJECT (gestionw, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (gestionw, treeview2w, "treeview2w");
  GLADE_HOOKUP_OBJECT (gestionw, label31w, "label31w");
  GLADE_HOOKUP_OBJECT (gestionw, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (gestionw, validert, "validert");
  GLADE_HOOKUP_OBJECT (gestionw, alignment17, "alignment17");
  GLADE_HOOKUP_OBJECT (gestionw, hbox17, "hbox17");
  GLADE_HOOKUP_OBJECT (gestionw, image17, "image17");
  GLADE_HOOKUP_OBJECT (gestionw, label53, "label53");
  GLADE_HOOKUP_OBJECT (gestionw, labelnombre, "labelnombre");
  GLADE_HOOKUP_OBJECT (gestionw, label54, "label54");
  GLADE_HOOKUP_OBJECT (gestionw, image21, "image21");
  GLADE_HOOKUP_OBJECT (gestionw, comboboxchoix, "comboboxchoix");
  GLADE_HOOKUP_OBJECT (gestionw, label52, "label52");

  return gestionw;
}

