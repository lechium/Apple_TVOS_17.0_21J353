//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLType.h"

__attribute__((visibility("hidden")))
@interface MTLTypeInternal : MTLType
{
    unsigned long long _dataType;	// 8 = 0x8
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010df24
- (id)description;	// IMP=0x000000000010df10
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000010defb
- (unsigned long long)dataType;	// IMP=0x000000000010deea
- (void)dealloc;	// IMP=0x000000000010debb
- (id)initWithDataType:(unsigned long long)arg1;	// IMP=0x000000000010de7c

@end

