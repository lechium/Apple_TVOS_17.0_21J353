//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDEventCounter : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    NSArray *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024c7db
@property(retain) NSArray *observers; // @synthesize observers=_observers;
@property unsigned long long count; // @synthesize count=_count;
- (id)initWithCount:(unsigned long long)arg1;	// IMP=0x000000000024c767
- (id)init;	// IMP=0x000000000024c753

@end

