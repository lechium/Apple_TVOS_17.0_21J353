//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, SDBonjourBrowser;

@interface SDWorkgroupBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    SDBonjourBrowser *_browser;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x00200000000a3aa6
- (void).cxx_destruct;	// IMP=0x00200000000a3ec3
- (void)stop;	// IMP=0x00100000000a3e74
- (void)start;	// IMP=0x00100000000a3d81
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x00100000000a3d31
@property(readonly, copy) NSSet *workgroups;
@property(readonly, copy) NSArray *nodes;
- (id)init;	// IMP=0x00100000000a3afb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
