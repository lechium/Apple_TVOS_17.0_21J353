//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDStructuredDataFoundationWriter
{
    id _container;	// 8 = 0x8
    NSString *_currentKey;	// 16 = 0x10
    NSMutableArray *_stack;	// 24 = 0x18
    _Bool _mutableContainers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004190e7
- (void)emitRootValue:(id)arg1;	// IMP=0x0000000000419033
- (void)writeLogicalValue:(id)arg1 validateAndCopy:(_Bool)arg2;	// IMP=0x0000000000418fb7
- (void)writeUUID:(id)arg1;	// IMP=0x0000000000418faa
- (void)writeDate:(id)arg1;	// IMP=0x0000000000418f9d
- (void)writeData:(id)arg1;	// IMP=0x0000000000418f90
- (void)writeNumber:(id)arg1;	// IMP=0x0000000000418f83
- (void)writeString:(id)arg1;	// IMP=0x0000000000418f76
- (void)writeBoolean:(_Bool)arg1;	// IMP=0x0000000000418f35
- (void)writeNull;	// IMP=0x0000000000418ef4
- (void)endDictionary;	// IMP=0x0000000000418e81
- (void)writeDictionaryKey:(id)arg1;	// IMP=0x0000000000418e6d
- (void)beginDictionaryOfSize:(unsigned long long)arg1;	// IMP=0x0000000000418df2
- (void)endArray;	// IMP=0x0000000000418d7f
- (void)beginArrayOfSize:(unsigned long long)arg1;	// IMP=0x0000000000418d04
- (void)failWithError:(id)arg1;	// IMP=0x0000000000418c8b
- (id)initWithMutableContainers:(_Bool)arg1;	// IMP=0x0000000000418c1d
- (id)init;	// IMP=0x0000000000418c09

@end
