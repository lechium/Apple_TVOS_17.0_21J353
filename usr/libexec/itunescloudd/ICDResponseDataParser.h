//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICDResponseDataParser : NSObject
{
}

+ (id)_parseListingItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0040000000109dd8
+ (id)_parseErrorResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000109b74
+ (id)_parsePlayStatusResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000108fdc
+ (id)_parseItemIDArrayWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000108e34
+ (id)_parseBrowseListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000108c84
+ (id)_parseListingCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000108a90
+ (id)_parseItemsResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010875d
+ (id)_parseUpdateTypeWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000010867c
+ (id)_parseEditCommandResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000010847a
+ (id)_parseDictionaryCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000001081fe
+ (id)_parseDeletedIDListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000107fbb
+ (id)_parseControlPromptResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000107d7a
+ (id)_parseControlInterfacesResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000107bcb
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000001079ff
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000107833
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000001076a8
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000010751d
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000107242
+ (id)_parseUpdateResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000107077
+ (id)_parseLoginResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000106eaa
+ (id)_parseResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned long long)arg3 usingHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000106b9a
+ (unsigned long long)_parseItemPropertyCountWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000106b75
+ (void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000106a02
+ (void)enumerateItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000106959
+ (void)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000106883
+ (unsigned long long)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 valuesOut:(CDStruct_4a344573 *)arg3 valuesCapacity:(unsigned long long)arg4;	// IMP=0x001000000010651c
+ (id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001063ac
+ (id)parseResponseData:(id)arg1;	// IMP=0x0010000000106398
+ (id)parseErrorInResponseData:(id)arg1;	// IMP=0x0010000000106244

@end

