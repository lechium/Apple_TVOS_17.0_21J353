//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface TIRemoteDataServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedRemoteDataServer;	// IMP=0x002000000000aac9
+ (void)resolveAssistantFrameworkClasses;	// IMP=0x001000000000a9bf
- (void).cxx_destruct;	// IMP=0x002000000000ade5
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000acb2
- (void)dealloc;	// IMP=0x001000000000ac58
- (id)init;	// IMP=0x001000000000ab69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

