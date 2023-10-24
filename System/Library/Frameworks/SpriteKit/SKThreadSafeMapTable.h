//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMapTable : NSObject
{
    struct _opaque_pthread_mutex_t _storageLock;	// 8 = 0x8
    NSMutableArray *_storage;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000025f90
- (void).cxx_destruct;	// IMP=0x00000000000261c8
- (id)description;	// IMP=0x00000000000261b2
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000026147
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000260a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026019
- (id)initWithNSMapTable:(id)arg1;	// IMP=0x0000000000025f98

@end

