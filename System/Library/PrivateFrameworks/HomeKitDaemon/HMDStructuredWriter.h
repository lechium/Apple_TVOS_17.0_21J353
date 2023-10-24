//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface HMDStructuredWriter
{
    NSError *_error;	// 8 = 0x8
}

+ (id)extendedTypeWriterWithWriter:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x006000000025189e
+ (id)writerIntoOPACKData:(id)arg1;	// IMP=0x00600000003d0884
+ (id)writerIntoObject:(id *)arg1 extendedTypeOptions:(unsigned long long)arg2;	// IMP=0x006000000041a067
+ (id)writerIntoObject:(id *)arg1;	// IMP=0x006000000041a039
- (void).cxx_destruct;	// IMP=0x000000000096b8ac
- (void)writeToken:(struct _HMDStructuredDataToken)arg1;	// IMP=0x000000000096b6c7
- (void)writeUUID:(id)arg1;	// IMP=0x000000000096b672
- (void)writeDate:(id)arg1;	// IMP=0x000000000096b61d
- (void)writeData:(id)arg1;	// IMP=0x000000000096b5c8
- (void)writeNumber:(id)arg1;	// IMP=0x000000000096b573
- (void)writeString:(id)arg1;	// IMP=0x000000000096b51e
- (void)writeBoolean:(_Bool)arg1;	// IMP=0x000000000096b4c7
- (void)writeNull;	// IMP=0x000000000096b4a7
- (void)endDictionary;	// IMP=0x000000000096b487
- (void)writeDictionaryKey:(id)arg1;	// IMP=0x000000000096b432
- (void)beginDictionaryOfSize:(unsigned long long)arg1;	// IMP=0x000000000096b3d1
- (void)endArray;	// IMP=0x000000000096b3b1
- (void)beginArrayOfSize:(unsigned long long)arg1;	// IMP=0x000000000096b350
- (void)failWithError:(id)arg1;	// IMP=0x000000000096b2dc
- (id)error;	// IMP=0x000000000096b2c7
- (void)writeLogicalValue:(id)arg1 validateAndCopy:(_Bool)arg2;	// IMP=0x0000000000419b87
- (void)writeLogicalValue:(id)arg1;	// IMP=0x0000000000419b70

@end
