//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQLiteDatabaseStoreDescriptor : NSObject
{
    NSString *_schemaName;	// 8 = 0x8
    Class _sessionClass;	// 16 = 0x10
    Class _transactionClass;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000365a8
@property Class transactionClass; // @synthesize transactionClass=_transactionClass;
@property Class sessionClass; // @synthesize sessionClass=_sessionClass;
@property(retain) NSString *schemaName; // @synthesize schemaName=_schemaName;

@end

