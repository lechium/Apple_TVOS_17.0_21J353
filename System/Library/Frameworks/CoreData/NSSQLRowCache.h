//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLRowCache
{
    NSSQLCore *_sqlCore;	// 40 = 0x28
    int _debug;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x00600000001f95b6
- (id)sqlCore;	// IMP=0x00000000001f98bf
- (void)dealloc;	// IMP=0x00000000001f9640
- (id)initWithPersistentStore:(id)arg1;	// IMP=0x00000000001f95c7

@end

