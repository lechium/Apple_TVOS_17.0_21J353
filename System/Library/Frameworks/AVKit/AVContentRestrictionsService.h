//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSRestrictionService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVContentRestrictionsService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueueForRequests;	// 8 = 0x8
    _Bool _presentingPasscodePrompt;	// 16 = 0x10
    _Bool _profileRestrictingMovies;	// 17 = 0x11
    _Bool _profileRestrictingTVShows;	// 18 = 0x12
    _Bool _requestingAccess;	// 19 = 0x13
    id _requestToken;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x0060000000123b04
- (void).cxx_destruct;	// IMP=0x0000000000122e43
@property(readonly, nonatomic, getter=isRequestingAccess) _Bool requestingAccess; // @synthesize requestingAccess=_requestingAccess;
@property(retain, nonatomic) id requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic, getter=hasProfileRestrictingTVShows) _Bool profileRestrictingTVShows; // @synthesize profileRestrictingTVShows=_profileRestrictingTVShows;
@property(nonatomic, getter=hasProfileRestrictingMovies) _Bool profileRestrictingMovies; // @synthesize profileRestrictingMovies=_profileRestrictingMovies;
@property(nonatomic, getter=isPresentingPasscodePrompt) _Bool presentingPasscodePrompt; // @synthesize presentingPasscodePrompt=_presentingPasscodePrompt;
- (void)_updateProfileRestrictions;	// IMP=0x0000000000122c6a
@property(readonly, nonatomic) PBSRestrictionService *restrictionService;
- (void)cancelRequest:(id)arg1;	// IMP=0x0000000000122bc9
- (id)validateMediaContentRating:(id)arg1 allowInteraction:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001229da
- (_Bool)shouldRevalidateMediaContentRating:(id)arg1 validatedRating:(id)arg2 validatedDate:(id)arg3;	// IMP=0x0000000000122820
- (void)_presentDeniedByProfile:(CDUnknownBlockType)arg1;	// IMP=0x000000000012245f
- (unsigned long long)_pbsRestrictedContentTypeFromDomain:(long long)arg1;	// IMP=0x000000000012243e
- (long long)_restrictionValueFromPBSRestrictionValue:(unsigned long long)arg1;	// IMP=0x000000000012239a
- (id)init;	// IMP=0x000000000012235f
- (id)_init;	// IMP=0x00000000001222f7

@end
