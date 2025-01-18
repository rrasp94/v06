#pragma once

namespace vsite::oop::v6
{
	template <typename T>
	T minimum(T a, T b)
	{
		if (a < b) {
			return a;
		}
		return b;
	}


	template <typename T, int v>
	class fixed_array
	{
	private:
		T arr[v];

	public:
		size_t size()
		{
			return v;
		}

		T& operator [] (size_t index)
		{
			return arr[index];
		}
	};

	template <typename T>
	struct point
	{
		T a, b;
	};

};