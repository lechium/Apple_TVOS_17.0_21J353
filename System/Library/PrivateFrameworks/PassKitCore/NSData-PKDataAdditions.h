//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (PKDataAdditions)
+ (id)dataWithCGImage:(struct CGImage *)arg1;	// IMP=0x00500000000d4110
+ (id)dataWithHexEncodedString:(id)arg1;	// IMP=0x00500000000d3ffd
- (id)URLBase64EncodedString;	// IMP=0x00100000000d41e7
- (_Bool)hasPDFMIMEType;	// IMP=0x00100000000d41bb
- (id)hexEncoding;	// IMP=0x00100000000d3f67
- (id)fileSafeBase64Encoding;	// IMP=0x00100000000d3f07
- (id)SHA256Hash;	// IMP=0x00100000000d3e67
- (id)SHA1Hash;	// IMP=0x00100000000d3dc7
@end

