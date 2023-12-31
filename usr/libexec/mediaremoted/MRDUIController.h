//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDUIControllerConnection, NSString;

@interface MRDUIController : NSObject
{
    id _delegate;	// 8 = 0x8
    MRDUIControllerConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000139139
@property(readonly, nonatomic) MRDUIControllerConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)bannerDismissed;	// IMP=0x00100000001390b8
- (void)invalidate;	// IMP=0x0010000000138fdf
- (void)bannerWithIdentifier:(id)arg1 postedEvent:(id)arg2;	// IMP=0x0010000000138eba
- (void)dismissAllBanners;	// IMP=0x0010000000138d47
- (void)dismissBannerWithIdentifier:(id)arg1;	// IMP=0x0010000000138bb0
- (void)postBannerRequest:(id)arg1;	// IMP=0x0010000000138a24
- (id)server;	// IMP=0x00100000001389d4
- (void)dealloc;	// IMP=0x0010000000138923
- (id)initWithClientObject:(id)arg1;	// IMP=0x0010000000138756
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000138706

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

