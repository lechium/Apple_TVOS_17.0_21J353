//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSData)
+ (_Bool)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;	// IMP=0x008000000061f78f
+ (id)_newZeroingDataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x008000000061f099
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000061f05d
+ (id)dataWithData:(id)arg1;	// IMP=0x008000000061e711
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x008000000061e6c9
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x008000000061e686
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x008000000061e643
+ (id)dataWithContentsOfMappedFile:(id)arg1;	// IMP=0x008000000061e614
+ (id)dataWithContentsOfURL:(id)arg1;	// IMP=0x008000000061e5e5
+ (id)dataWithContentsOfFile:(id)arg1;	// IMP=0x008000000061e5b6
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x008000000061e573
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000061e53f
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000061e50b
+ (id)data;	// IMP=0x008000000061e4e5
+ (id)_alloc;	// IMP=0x008000000061e491
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000061e470
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x008000000061d346
- (_Bool)_providesConcreteBacking;	// IMP=0x001000000062059a
- (id)base64Encoding;	// IMP=0x0010000000620550
- (id)initWithBase64Encoding:(id)arg1;	// IMP=0x00100000006204bb
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;	// IMP=0x0010000000620471
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000006203e1
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;	// IMP=0x0010000000620394
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000620304
- (id)_base64EncodingAsString:(_Bool)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x001000000061fbe1
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000061f7b1
- (_Bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(CDStruct_6243051c *)arg6;	// IMP=0x001000000061f4f5
- (id)_createDispatchData;	// IMP=0x001000000061f3f6
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x001000000061f0de
- (id)initWithData:(id)arg1;	// IMP=0x001000000061efc9
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000061efb2
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000061ef98
- (id)initWithContentsOfMappedFile:(id)arg1;	// IMP=0x001000000061eed9
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x001000000061ed49
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000061ed2d
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000061ed11
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000061eab2
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000061e951
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x001000000061e89e
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x001000000061e886
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x001000000061e86e
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x001000000061e846
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000061e81b
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000061e7f0
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;	// IMP=0x001000000061e7bc
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000061e3e4
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000061e389
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000061e32c
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000061e1cf
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000061e0dc
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x001000000061de77
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x001000000061da48
- (_Bool)_isCompact;	// IMP=0x001000000061d90e
- (_Bool)_isDispatchData;	// IMP=0x001000000061d906
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x001000000061d6bd
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000061d61e
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000061d52a
- (void)getBytes:(void *)arg1;	// IMP=0x001000000061d43e
- (_Bool)_allowsDirectEncoding;	// IMP=0x001000000061d429
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x001000000061d38c
- (_Bool)_canReplaceWithDispatchDataForXPCCoder;	// IMP=0x001000000061d34e
- (Class)classForCoder;	// IMP=0x001000000061d335
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000061d0c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000061cfe2
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000061cee1
- (_Bool)_copyWillRetain;	// IMP=0x001000000061ced9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000061ce40
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000061cdd7
- (unsigned long long)hash;	// IMP=0x001000000061cd63
- (id)_asciiDescription;	// IMP=0x001000000061cc89
- (id)debugDescription;	// IMP=0x001000000061c9d9
- (id)description;	// IMP=0x001000000061c6f4
- (unsigned long long)_cfTypeID;	// IMP=0x001000000061c6ea
- (const void *)bytes;	// IMP=0x001000000061c698
- (unsigned long long)length;	// IMP=0x001000000061c646
- (id)_compressedDataUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000625318
- (id)_decompressedDataUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x00100000006250ee
- (id)compressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x00100000006250c0
- (id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000062501a
- (void)_produceDataWithCompressionOperation:(int)arg1 algorithm:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000624e11
- (_Bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long *)arg2 trailer:(CDStruct_f10e9336 *)arg3;	// IMP=0x0010000000625838
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;	// IMP=0x0010000000626398
- (id)_web_parseRFC822HeaderFields;	// IMP=0x0010000000625e04
- (id)_web_guessedMIMETypeForExtension:(id)arg1;	// IMP=0x0010000000625d7f
- (id)_web_guessedMIMEType;	// IMP=0x0010000000625af2
- (id)_web_guessedMIMETypeForXML;	// IMP=0x0010000000625988
- (_Bool)isNSData__;	// IMP=0x00100000006e7df4
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000007a492d
@end

