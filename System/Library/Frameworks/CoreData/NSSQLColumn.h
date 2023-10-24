//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLColumn
{
    NSString *_columnName;	// 40 = 0x28
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x0000000000165cb5
- (id)columnName;	// IMP=0x0000000000165ca4
- (unsigned int)slot;	// IMP=0x0000000000165c9a
- (unsigned char)sqlType;	// IMP=0x0000000000165c64
- (id)description;	// IMP=0x0000000000165bca
- (void)dealloc;	// IMP=0x0000000000165b7c
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2;	// IMP=0x0000000000165ac9
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x0000000000165a44
- (id)initForReadOnlyFetching;	// IMP=0x0000000000165a0a

@end

