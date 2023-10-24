//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitySortIndex : NSObject
{
    NSString *_title;	// 8 = 0x8
    unsigned long long _startIndex;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003b3fe
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000000003b170
- (id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003b0e3
- (id)init;	// IMP=0x000000000003b074

@end
