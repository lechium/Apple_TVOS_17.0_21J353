//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDBannerCenter, MRRouteBannerRequest, NSMutableArray, NSString;

@interface MRDMediaActivityManager : NSObject
{
    MRRouteBannerRequest *_activeRequest;	// 8 = 0x8
    MRRouteBannerRequest *_activePillRequest;	// 16 = 0x10
    MRDBannerCenter *_bannerCenter;	// 24 = 0x18
    MRDBannerCenter *_pillCenter;	// 32 = 0x20
    unsigned long long _activePillBannerState;	// 40 = 0x28
    unsigned long long _activeBannerState;	// 48 = 0x30
    NSMutableArray *_pendingRequests;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
    CDUnknownBlockType _pillCompletion;	// 72 = 0x48
}

+ (id)manager;	// IMP=0x0020000000142b8c
- (void).cxx_destruct;	// IMP=0x00200000001447f8
@property(copy, nonatomic) CDUnknownBlockType pillCompletion; // @synthesize pillCompletion=_pillCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) unsigned long long activeBannerState; // @synthesize activeBannerState=_activeBannerState;
@property(nonatomic) unsigned long long activePillBannerState; // @synthesize activePillBannerState=_activePillBannerState;
@property(retain, nonatomic) MRDBannerCenter *pillCenter; // @synthesize pillCenter=_pillCenter;
@property(retain, nonatomic) MRDBannerCenter *bannerCenter; // @synthesize bannerCenter=_bannerCenter;
- (void)presentControlCenterCallToAction;	// IMP=0x0010000000144758
- (void)bannerWithRequestIdentifier:(id)arg1 didReceiveEvent:(unsigned long long)arg2;	// IMP=0x0010000000143c6e
- (id)staticRequestForRoute:(id)arg1 devices:(id)arg2;	// IMP=0x00100000001439bd
- (void)dismissAllBannerRequests;	// IMP=0x001000000014393e
- (void)dismissPillBannerRequest:(id)arg1;	// IMP=0x00100000001438ae
- (void)dismissBannerRequest:(id)arg1;	// IMP=0x001000000014381e
- (void)dismissConnectedBanner;	// IMP=0x001000000014374f
@property(readonly, nonatomic, getter=isPresentingConnectedPill) _Bool presentingConnectedPill;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
- (void)postConnectedBannerRequestForRoute:(id)arg1 devices:(id)arg2 endpoint:(id)arg3 remoteControl:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001434a9
- (void)dequeueNextPendingRequest;	// IMP=0x001000000014336e
- (void)enqueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000014327c
- (void)postAutoRouteBannerRequestForRoute:(id)arg1 devices:(id)arg2 endpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001430f0
- (void)postOneTapSuggestionBannerRequestForRoute:(id)arg1 devices:(id)arg2 endpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000142f79
- (void)postBannerRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000142ed1
- (void)postPillBannerRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000142e29
@property(retain, nonatomic) MRRouteBannerRequest *activePillRequest; // @synthesize activePillRequest=_activePillRequest;
// Error: Property attributes should begin with the type ('T') attribute, property name: activeRequest
// Property attributes: (null)

- (id)init;	// IMP=0x0010000000142c11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
