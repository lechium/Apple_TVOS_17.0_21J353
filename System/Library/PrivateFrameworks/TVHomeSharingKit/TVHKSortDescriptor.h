//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSortDescriptor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKSortDescriptor : NSSortDescriptor
{
    NSString *_preferredKey;	// 40 = 0x28
}

+ (id)sortDescriptorWithKey:(id)arg1 preferredKey:(id)arg2 ascending:(_Bool)arg3 comparator:(CDUnknownBlockType)arg4;	// IMP=0x006000000002d629
- (void).cxx_destruct;	// IMP=0x000000000002dc6c
@property(copy, nonatomic) NSString *preferredKey; // @synthesize preferredKey=_preferredKey;
- (id)description;	// IMP=0x000000000002dae7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002d91e
- (unsigned long long)hash;	// IMP=0x000000000002d84d
- (long long)compareObject:(id)arg1 toObject:(id)arg2;	// IMP=0x000000000002d6d0

@end

