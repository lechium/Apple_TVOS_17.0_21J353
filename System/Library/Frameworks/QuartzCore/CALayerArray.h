//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface CALayerArray : NSArray
{
    struct _CALayerArrayIvars _ivars;	// 8 = 0x8
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001f7106
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f70bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f7070
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000001f7032
- (void)getObjects:(id *)arg1;	// IMP=0x00000000001f6ff3
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f6fcc
- (unsigned long long)count;	// IMP=0x00000000001f6fba
- (void)dealloc;	// IMP=0x00000000001f6ef6
- (id)initWithLayers:(id *)arg1 count:(unsigned long long)arg2 retain:(_Bool)arg3;	// IMP=0x00000000001f6e21

@end

