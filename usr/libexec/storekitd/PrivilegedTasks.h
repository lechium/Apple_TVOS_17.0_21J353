//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface PrivilegedTasks : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)removeIAPProductAtPath:(id)arg1;	// IMP=0x0040000000097ef4
+ (id)installReceiptData:(id)arg1 atBundlePath:(id)arg2;	// IMP=0x0010000000097e58
+ (id)copyIAPProductAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x0010000000097dc8
+ (id)sharedInstance;	// IMP=0x0010000000097d26
- (void).cxx_destruct;	// IMP=0x002000000009855c
- (id)_removeIAPProductAtPath:(id)arg1;	// IMP=0x00100000000983b6
- (id)_installReceiptData:(id)arg1 atBundlePath:(id)arg2;	// IMP=0x00100000000981f9
- (id)_copyIAPProductAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x001000000009801b
- (id)_serviceConnection;	// IMP=0x0010000000097f6e

@end

