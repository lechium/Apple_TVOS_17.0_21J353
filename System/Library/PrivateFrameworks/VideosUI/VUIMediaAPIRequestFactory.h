//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaAPIRequestFactory : NSObject
{
}

+ (id)_purchasesEpisodesEndpoint;	// IMP=0x008000000019d6c2
+ (id)_URLAddAdditionalParameter:(id)arg1;	// IMP=0x008000000019d69d
+ (id)_URLParameterForAdditionalParameters;	// IMP=0x008000000019d690
+ (id)_URLParameterForExtend:(id)arg1;	// IMP=0x008000000019d61f
+ (id)_URLParameterForIncludeType:(id)arg1 includeRelationship:(id)arg2;	// IMP=0x008000000019d5f7
+ (id)_URLParameterForInclude:(id)arg1;	// IMP=0x008000000019d5d4
+ (id)_URLParameterForLimit:(id)arg1;	// IMP=0x008000000019d58b
+ (id)_URLParameterForSort:(id)arg1;	// IMP=0x008000000019d55f
+ (id)_URLParameterWithSharedPurchases;	// IMP=0x008000000019d52f
+ (id)_URLParameterWithGenreIDsFilter:(id)arg1;	// IMP=0x008000000019d503
+ (id)_URLParameterWithGenreFilter:(id)arg1;	// IMP=0x008000000019d31a
+ (id)_URLParameterFilterWithShowIdentifier:(id)arg1;	// IMP=0x008000000019d2ee
+ (id)_URLParameterWithOwnerIdentifier:(id)arg1;	// IMP=0x008000000019d2c2
+ (id)_URLParameterTypeFilterWithTypes:(id)arg1;	// IMP=0x008000000019cfd2
+ (id)_URLRequestWithURLString:(id)arg1;	// IMP=0x008000000019cf74
+ (void)_addTypeFilterToURL:(id *)arg1 forRequest:(id)arg2;	// IMP=0x008000000019cc67
+ (id)genresRequestWithOwnerIdentifier:(id)arg1;	// IMP=0x008000000019c948
+ (id)genresRequestForVUIFamilySharingGenreIDsFilter:(id)arg1 withOwnerIdentifier:(id)arg2;	// IMP=0x008000000019c582
+ (id)genresRequestForVUIFamilySharingGenre:(id)arg1 withOwnerIdentifier:(id)arg2;	// IMP=0x008000000019c1bc
+ (id)showsPurchasesRequestWithOwnerIdentifier:(id)arg1 sortType:(unsigned long long)arg2;	// IMP=0x008000000019bdf3
+ (id)episodesRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2;	// IMP=0x008000000019b956
+ (id)seasonsRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2;	// IMP=0x008000000019b5b4
+ (id)moviesPurchasesRequestWithOwnerIdentifier:(id)arg1 sortType:(unsigned long long)arg2;	// IMP=0x008000000019b188
+ (id)recentPurchasesRequestWithOwnerIdentifier:(id)arg1;	// IMP=0x008000000019add7
+ (id)familyMembersRequest;	// IMP=0x008000000019ad5e

@end

