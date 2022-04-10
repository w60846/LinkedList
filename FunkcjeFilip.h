#pragma once
#include <iostream>


using namespace std;



class IntegerList
{
	struct node
	{
		long int ID;
		long long int nick;
		node* n = NULL;
	};

	unsigned int p, numer = 0;
	node* list = NULL;
	node* w = new node;
	node* temp = NULL;

	void setnum()
	{
		int v = 0;
		temp = list;
		while (temp->n != NULL)
		{
			temp->ID = v;
			temp = temp->n;
			v++;
		}
		temp->ID = v;
	}

public:

	int size()
	{
		return numer + 1;
	}
	void print()
	{
		setnum();

		if (list == NULL)
		{
			cout << "{ }";
		}
		else
		{
			cout << "{ ";

			temp = list;

			while (temp->n != NULL)
			{
				cout << temp->nick << " ";
				temp = temp->n;

			}

			cout << temp->nick << " ";

		}
		cout << "}\n";

	}
	void add(long int s)
	{
		if (list == NULL)
		{
			w = new node;
			w->ID = numer;
			w->nick = s;
			list = w;
		}
		else
		{
			w = new node;
			numer++;
			w->nick = s;
			w->ID = numer;
			temp = list;
			while (temp->n != NULL)
			{
				temp = temp->n;
			}
			temp->n = w;
			temp = list;
		}
	}
	long int  get(int p)
	{
		setnum();

		if (list == NULL)
		{
			return NULL;
		}
		else
		{
			temp = list;

			while (temp->ID != p)
			{
				temp = temp->n;
			}
			return	temp->nick;
		}
	}
	void remove(int p)
	{
		if (list == NULL)
		{

		}
		else if (p < numer && p>0)
		{

			temp = list;
			while (temp->ID != p - 1)
			{
				temp = temp->n;
			}
			temp->n = temp->n->n;

			numer--;
		}

		else if (p == numer)
		{
			temp = list;
			while (temp->ID != p - 1)
			{
				temp = temp->n;
			}
			temp->n = NULL;
			numer--;
		}
		else if (p == 0)
		{
			temp = list;
			temp = temp->n;
			list = temp;
			numer--;//TUTAJ
		}
	}
	void add(int p, long int s)
	{

		if (p == 0)
		{

			if (list == NULL)
			{
				w = new node;
				w->nick = s;

				list = w;

				numer++;// NWM
			}
			else
			{

				temp = list;
				temp->nick = s;
				temp = list;

			}
		}
		else if (p > 0 && p < numer)
		{
			if (list == NULL)
			{

			}
			else
			{
				temp = list;
				while (temp->ID != p)
				{
					temp = temp->n;
				}
				temp->nick = s;
				temp = list;
			}

		}
		else if (p == numer)
		{

			if (list == NULL)
			{

			}
			else
			{
				temp = list;
				while (temp->ID != p)
				{
					temp = temp->n;
				}
				temp->nick = s;
				temp = list;

			}
		}

	}
	int indexOf(long int s)
	{
		setnum();

		if (list == NULL)
		{

			return NULL;
		}
		else
		{
			temp = list;
			while (temp->nick != s)
			{
				temp = temp->n;
			}
			return	temp->ID;
		}
	}
	void clear()
	{
		list = NULL;
		numer = 0;
	}
	void sort()
	{
		setnum();

		if (list == NULL)
		{

		}
		else
		{
			for (int i = 0; i <= numer; i++)
			{
				temp = list;
				while (temp->n != NULL)
				{
					if (temp->nick > temp->n->nick)
					{
						long int s = temp->nick;
						temp->nick = temp->n->nick;
						temp->n->nick = s;
					}
					temp = temp->n;
				}
			}
		}
	}

	void reverse()
	{
		setnum();

		if (list == NULL)
		{

		}
		else
		{
			for (int i = 0; i <= numer; i++)
			{
				temp = list;

				while (temp->n != NULL)
				{
					if (temp->nick < temp->n->nick)
					{
						long int s = temp->nick;
						temp->nick = temp->n->nick;
						temp->n->nick = s;
					}
					temp = temp->n;
				}
			}
		}
	}



};

class StringList
{
	struct node
	{
		int ID;
		string nick;
		node* n = NULL;
	};

	unsigned int p;

	node* w = new node;
	node* temp = NULL;

	void setnum()
	{
		int v = 0;
		temp = list;
		while (temp->n != NULL)
		{
			temp->ID = v;
			temp = temp->n;
			v++;
		}
		temp->ID = v;

	}



public:
	node* list = NULL;
	unsigned int numer = 0;

	int lenght()
	{
		return numer + 1;
	}
	void print()
	{
		setnum();

		if (list == NULL)
		{
			cout << "{ }";

		}
		else
		{
			cout << "{ ";
			temp = list;
			while (temp->n != NULL)
			{
				cout << temp->nick << " ";
				temp = temp->n;
			}

			cout << temp->nick << " ";

		}
		cout << "}\n";
	}
	void add(string s)
	{
		if (list == NULL)
		{
			w = new node;
			w->ID = numer;
			w->nick = s;
			list = w;
		}
		else
		{
			w = new node;
			numer++;
			w->nick = s;
			w->ID = numer;
			temp = list;
			while (temp->n != NULL)
			{
				temp = temp->n;
			}
			temp->n = w;
			temp = list;
		}
	}
	string  get(int p)
	{
		setnum();

		if (list == NULL)
		{
			return NULL;
		}
		else
		{
			temp = list;
			while (temp->ID != p)
			{
				temp = temp->n;
			}
			return	temp->nick;
		}
	}
	void remove(int p)
	{
		if (list == NULL)
		{

		}
		else if (p < numer && p>0)
		{

			temp = list;
			while (temp->ID != p - 1)
			{
				temp = temp->n;
			}
			temp->n = temp->n->n;
			numer--;
		}

		else if (p == numer)
		{
			temp = list;
			while (temp->ID != p - 1)
			{
				temp = temp->n;
			}
			temp->n = NULL;
			numer--;
		}
		else if (p == 0)
		{
			temp = list;
			temp = temp->n;
			list = temp;
			numer--;
		}
	}
	void add(int p, string s)
	{

		if (p == 0)
		{

			if (list == NULL)
			{
				w = new node;
				w->nick = s;
				list = w;
				numer++;
			}
			else
			{
				temp = list;
				temp->nick = s;
				temp = list;
			}
		}
		else if (p > 0 && p < numer)
		{

			if (list == NULL)
			{

			}
			else
			{
				temp = list;
				while (temp->ID != p)
				{
					temp = temp->n;
				}
				temp->nick = s;
				temp = list;
			}
		}
		else if (p == numer)
		{

			if (list == NULL)
			{

			}
			else
			{
				temp = list;
				while (temp->ID != p)
				{
					temp = temp->n;
				}
				temp->nick = s;
				temp = list;
			}
		}


	}
	int indexOf(string s)
	{
		setnum();

		if (list == NULL)
		{

			return NULL;
		}
		else
		{
			temp = list;
			while (temp->nick != s)
			{
				temp = temp->n;
			}
			return	temp->ID;
		}
	}
	void clear()
	{
		list = NULL;
		numer = 0;
	}
	void sort()
	{
		setnum();

		if (list == NULL)
		{

		}
		else
		{
			for (int i = 0; i <= numer; i++)
			{
				temp = list;
				while (temp->n != NULL)
				{
					if (temp->nick > temp->n->nick)
					{
						string s = temp->nick;
						temp->nick = temp->n->nick;
						temp->n->nick = s;
					}
					temp = temp->n;
				}
			}

		}

	}

	void reverse()
	{
		setnum();

		if (list == NULL)
		{

		}
		else
		{
			for (int i = 0; i <= numer; i++)
			{
				temp = list;

				while (temp->n != NULL)
				{
					if (temp->nick < temp->n->nick)
					{
						string s = temp->nick;
						temp->nick = temp->n->nick;
						temp->n->nick = s;
					}
					temp = temp->n;
				}
			}
		}
	}
};


class String
{
	struct node
	{
		int ID;
		string nick;
		node* n = NULL;
	};

	unsigned int p, numer = 0;
	node* list = NULL;
	node* w = new node;
	node* temp = NULL;

	void setnum()
	{
		int v = 0;
		temp = list;
		while (temp->n != NULL)
		{
			temp->ID = v;
			temp = temp->n;
			v++;
		}
		temp->ID = v;

	}

public:


	int size()
	{
		return numer + 1;
	}
	void print()
	{
		setnum();

		if (list == NULL)
		{
			cout << "{ }";
		}
		else
		{
			cout << "{ ";

			temp = list;

			while (temp->n != NULL)
			{
				cout << temp->nick << " ";
				temp = temp->n;
			}

			cout << temp->nick << " ";

		}
		cout << "}\n";

	}
	void add(string s)
	{
		if (list == NULL)
		{
			w = new node;
			w->ID = numer;
			w->nick = s;
			list = w;
		}
		else
		{
			w = new node;
			numer++;
			w->nick = s;
			w->ID = numer;
			temp = list;
			while (temp->n != NULL)
			{
				temp = temp->n;
			}
			temp->n = w;
			temp = list;
		}
	}
	string  get(int p)
	{
		setnum();

		if (list == NULL)
		{
			return NULL;
		}
		else
		{
			temp = list;
			while (temp->ID != p)
			{
				temp = temp->n;
			}
			return	temp->nick;
		}



	}

	void remove(int p)
	{
		if (list == NULL)
		{

		}
		else if (p < numer && p>0)
		{
			temp = list;
			while (temp->ID != p - 1)
			{
				temp = temp->n;
			}
			temp->n = temp->n->n;
			numer--;
		}

		else if (p == numer)
		{
			temp = list;
			while (temp->ID != p - 1)
			{
				temp = temp->n;
			}
			temp->n = NULL;
			numer--;
		}
		else if (p == 0)
		{
			temp = list;
			temp = temp->n;
			list = temp;
			numer--;
		}
	}
	void add(int p, string s)
	{
		if (p == 0)
		{
			if (list == NULL)
			{
				w = new node;
				w->nick = s;
				list = w;
				numer++;
			}
			else
			{
				temp = list;
				temp->nick = s;
				temp = list;
			}
		}
		else if (p > 0 && p < numer)
		{
			if (list == NULL)
			{

			}
			else
			{
				temp = list;
				while (temp->ID != p)
				{
					temp = temp->n;
				}
				temp->nick = s;
				temp = list;
			}

		}
		else if (p == numer)
		{
			if (list == NULL)
			{

			}
			else
			{
				temp = list;
				while (temp->ID != p)
				{
					temp = temp->n;
				}
				temp->nick = s;
				temp = list;
			}
		}
	}
	int indexOf(string s)
	{
		setnum();

		if (list == NULL)
		{
			return NULL;
		}
		else
		{
			temp = list;
			while (temp->nick != s)
			{
				temp = temp->n;
			}
			return	temp->ID;

		}
	}
	void clear()
	{
		list = NULL;
		numer = 0;
	}
	void sort()
	{
		setnum();

		if (list == NULL)
		{

		}
		else
		{
			for (int i = 0; i <= numer; i++)
			{
				temp = list;
				while (temp->n != NULL)
				{
					if (temp->nick > temp->n->nick)
					{
						string s = temp->nick;
						temp->nick = temp->n->nick;
						temp->n->nick = s;
					}
					temp = temp->n;
				}
			}
		}
	}

	void reverse()
	{
		setnum();

		if (list == NULL)
		{

		}
		else
		{
			for (int i = 0; i <= numer; i++)
			{
				temp = list;

				while (temp->n != NULL)
				{
					if (temp->nick < temp->n->nick)
					{
						string s = temp->nick;
						temp->nick = temp->n->nick;
						temp->n->nick = s;
					}
					temp = temp->n;
				}
			}
		}
	}



};