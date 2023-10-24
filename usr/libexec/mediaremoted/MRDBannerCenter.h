//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MRBannerDelegate, MRBannerRequestRepresentable, MRBannerUIControllable;

@interface MRDBannerCenter : NSObject
{
    id <MRBannerRequestRepresentable> _activeRequest;	// 8 = 0x8
    id <MRBannerDelegate> _delegate;	// 16 = 0x10
    id <MRBannerUIControllable> _bannerControllable;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000f3d6b
@property(retain, nonatomic) id <MRBannerUIControllable> bannerControllable; // @synthesize bannerControllable=_bannerControllable;
@property(nonatomic) __weak id <MRBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidated;	// IMP=0x00100000000f3d15
- (void)bannerWithIdentifier:(id)arg1 postedEvent:(unsigned long long)arg2;	// IMP=0x00100000000f3bf9
- (void)dismissAllBannerRequests;	// IMP=0x00100000000f3b2c
- (void)dismissBannerWithIdentifier:(id)arg1;	// IMP=0x00100000000f3a3b
- (void)postBannerRequest:(id)arg1;	// IMP=0x00100000000f3864
@property(retain, nonatomic) id <MRBannerRequestRepresentable> activeRequest; // @synthesize activeRequest=_activeRequest;
- (id)init;	// IMP=0x00100000000f37b3
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000f3707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

