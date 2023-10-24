//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountRegistry;

__attribute__((visibility("hidden")))
@interface __HMDDeviceController
{
    HMDAccountRegistry *_accountRegistry;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000673d0e
@property(readonly) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void)__handleAddedDevice:(id)arg1;	// IMP=0x0000000000673a31
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x0000000000673811
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000673590
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000673006
- (void)dealloc;	// IMP=0x0000000000672f69
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;	// IMP=0x0000000000672df8

@end
