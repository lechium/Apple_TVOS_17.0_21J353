//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerDeputy
{
}

+ (id)deputyWithViewController:(id)arg1;	// IMP=0x00100000012b2c68
+ (id)XPCInterface;	// IMP=0x00100000012b2c60
- (id)invalidate;	// IMP=0x00000000012b2cb8
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000012b2ca6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

