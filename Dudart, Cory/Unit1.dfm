object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 361
  ClientWidth = 366
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 188
    Top = 250
    Width = 16
    Height = 13
    Caption = '.01'
  end
  object Label4: TLabel
    Left = 188
    Top = 223
    Width = 16
    Height = 13
    Caption = '.05'
  end
  object Label5: TLabel
    Left = 188
    Top = 196
    Width = 16
    Height = 13
    Caption = '.10'
  end
  object Label6: TLabel
    Left = 188
    Top = 169
    Width = 16
    Height = 13
    Caption = '.25'
  end
  object Label7: TLabel
    Left = 192
    Top = 142
    Width = 12
    Height = 13
    Caption = '$1'
  end
  object Label8: TLabel
    Left = 192
    Top = 88
    Width = 12
    Height = 13
    Caption = '$5'
  end
  object Label9: TLabel
    Left = 186
    Top = 34
    Width = 18
    Height = 13
    Caption = '$20'
  end
  object Label10: TLabel
    Left = 192
    Top = 115
    Width = 12
    Height = 13
    Caption = '$2'
  end
  object Label11: TLabel
    Left = 186
    Top = 61
    Width = 18
    Height = 13
    Caption = '$10'
  end
  object Label1: TLabel
    Left = 24
    Top = 89
    Width = 60
    Height = 13
    Caption = 'Sale Amount'
  end
  object Label2: TLabel
    Left = 24
    Top = 137
    Width = 73
    Height = 13
    Caption = 'Cash Tendered'
  end
  object Label12: TLabel
    Left = 180
    Top = 277
    Width = 24
    Height = 13
    Caption = 'Total'
  end
  object saleAmt: TEdit
    Left = 24
    Top = 108
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object cashTendered: TEdit
    Left = 24
    Top = 156
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 223
    Top = 31
    Width = 121
    Height = 21
    TabOrder = 2
    Text = '0'
  end
  object Edit4: TEdit
    Left = 223
    Top = 58
    Width = 121
    Height = 21
    TabOrder = 3
    Text = '0'
  end
  object Edit5: TEdit
    Left = 223
    Top = 139
    Width = 121
    Height = 21
    TabOrder = 4
    Text = '0'
  end
  object Edit6: TEdit
    Left = 223
    Top = 166
    Width = 121
    Height = 21
    TabOrder = 5
    Text = '0'
  end
  object Edit7: TEdit
    Left = 223
    Top = 112
    Width = 121
    Height = 21
    TabOrder = 6
    Text = '0'
  end
  object Edit8: TEdit
    Left = 223
    Top = 85
    Width = 121
    Height = 21
    TabOrder = 7
    Text = '0'
  end
  object Edit9: TEdit
    Left = 223
    Top = 193
    Width = 121
    Height = 21
    TabOrder = 8
    Text = '0'
  end
  object Edit10: TEdit
    Left = 223
    Top = 247
    Width = 121
    Height = 21
    TabOrder = 9
    Text = '0'
  end
  object Edit11: TEdit
    Left = 223
    Top = 220
    Width = 121
    Height = 21
    TabOrder = 10
    Text = '0'
  end
  object Button1: TButton
    Left = 64
    Top = 200
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 11
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 223
    Top = 274
    Width = 121
    Height = 21
    TabOrder = 12
  end
end
