//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UAActivityReplay;
@protocol SFActivityAdvertiserDelegate;

@interface UAMockActivityAdvertiser : NSObject
{
    id <SFActivityAdvertiserDelegate> _delegate;	// 8 = 0x8
    UAActivityReplay *_controller;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000069661
@property(retain) UAActivityReplay *controller; // @synthesize controller=_controller;
@property id <SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchLoginIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000069613
- (void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069447
- (void)fetchSFPeerDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000692fe
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;	// IMP=0x0010000000069273
- (id)initWithController:(id)arg1;	// IMP=0x0010000000069208

@end
