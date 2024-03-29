//
//  ContactUsViewController.h
//  session 7 task
//
//  Created by GreenRoot on 5/3/17.
//  Copyright © 2017 GreenRoot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ContactUsViewController : UIViewController <MFMailComposeViewControllerDelegate,MKMapViewDelegate,CLLocationManagerDelegate>{

    CLLocationManager *locationManager;
    CLLocation *currentLocation;
}
@property (weak, nonatomic) IBOutlet UIView *whiteBackgrond;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *sideBarButton;


@property (strong, nonatomic) IBOutlet UITextField *contacttext;

- (IBAction)call:(id)sender;

- (IBAction)sendMail:(id)sender;

- (IBAction)openUrl:(id)sender;

@property (strong, nonatomic) IBOutlet MKMapView *map;
@property (strong, nonatomic) IBOutlet UIButton *mapbutton;
@property (strong, nonatomic) IBOutlet UIButton *clockbutton;

@end
