#include <stdio.h>
#include <stdint.h>

int main()
{
    int packet_id, status_code;
    float voltage;

    if (scanf("%x %o %f", &packet_id, &status_code, &voltage) != 3)
    {
        return -1;
    }

    uint8_t ustatus_code = status_code;

    uint16_t checksum = packet_id + status_code;

    char ch = status_code;

    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %u\n", packet_id, ustatus_code, ch, voltage, checksum);

    return 0;
}
