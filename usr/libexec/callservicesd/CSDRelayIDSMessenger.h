//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSDRelayIDSMessengerDelegate;

@interface CSDRelayIDSMessenger : NSObject
{
    id <CSDRelayIDSMessengerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009a6f4
@property(nonatomic) __weak id <CSDRelayIDSMessengerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a6b7

@end
