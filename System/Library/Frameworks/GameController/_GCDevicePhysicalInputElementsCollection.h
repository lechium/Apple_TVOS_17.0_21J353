//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCPhysicalInputElementCollection.h"

@class _GCDevicePhysicalInputBase;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection
{
    _GCDevicePhysicalInputBase *_implementation;	// 8 = 0x8
}

- (id)elementForAlias:(id)arg1;	// IMP=0x0000000000018e08
- (id)elementAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000018de7
- (unsigned long long)count;	// IMP=0x0000000000018dc4
- (_Bool)allowsWeakReference;	// IMP=0x0000000000018dbc
- (unsigned long long)retainCount;	// IMP=0x0000000000018d96
- (oneway void)release;	// IMP=0x0000000000018d77
- (id)retain;	// IMP=0x0000000000018d4a

@end

