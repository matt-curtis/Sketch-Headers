//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSymbol.h"

#import "MSSymbol.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSSymbol : _MSSymbol <MSSymbol>
{
}

- (id)ignoredTextLayersFromInstance:(id)arg1;
- (id)newInstanceReplacingLayer:(id)arg1;
- (void)prepareToBecomeSharedObjectValue:(struct MSModelBase *)arg1;
- (unsigned long long)type;
- (id)newUnregisteredInstance;
- (id)newInstance;
- (id)masterInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <MSModelObject> valueGeneric;

@end

