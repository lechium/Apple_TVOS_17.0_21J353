//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTRemoteDeviceBrowserObserver;

__attribute__((visibility("hidden")))
@interface GTRemoteDeviceBrowserReplyStream
{
    id <GTRemoteDeviceBrowserObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002b1c7
- (void)notifyDeviceListChanged_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000002b151
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000002b0ad

@end

