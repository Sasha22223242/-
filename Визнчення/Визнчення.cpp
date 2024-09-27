using System;

class Програма
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("Введіть букву українського алфавіту у верхньому регістрі:");
        char буква = Console.ReadKey().KeyChar;
        Console.WriteLine();

        if (буква >= 'А' && буква <= 'Щ' || буква == 'Ь')
        {
            Console.WriteLine($"Наступна буква: {(char)(буква + 1)}");
        }
        else if (буква == 'Я')
        {
            Console.WriteLine("Далі букв немає.");
        }
        else
        {
            Console.WriteLine("Невірно введена буква.");
        }
    }
}
