// Class MoviePlayer.MoviePlayerSettings
// Size : 0x40 (Inherited : 0x28)
struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28(0x1)
	bool bMoviesAreSkippable; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0006]; // 0x2A(0x6)
	struct TArray<struct FString> StartupMovies; // 0x30(0x10)
};

