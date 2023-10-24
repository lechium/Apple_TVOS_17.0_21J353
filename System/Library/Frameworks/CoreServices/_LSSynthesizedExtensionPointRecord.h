//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSExtensionPointRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSSynthesizedExtensionPointRecord : LSExtensionPointRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000db4ab
- (void).cxx_destruct;	// IMP=0x00000000000db620
- (id)identifier;	// IMP=0x00000000000db60a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000db5b4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000db50d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000db4b3
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x00000000000db3b3
- (unsigned int)TCCPolicy;	// IMP=0x00000000000db3a8
- (unsigned int)extensionPointType;	// IMP=0x00000000000db39d
- (id)parentAppRecord;	// IMP=0x00000000000db395
- (id)SDKDictionary;	// IMP=0x00000000000db38b
- (unsigned int)platform;	// IMP=0x00000000000db381
- (id)version;	// IMP=0x00000000000db374
- (id)name;	// IMP=0x00000000000db362
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000000db2ab
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000db123

@end
